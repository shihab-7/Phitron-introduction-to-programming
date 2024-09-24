#include <iostream>
#include <queue>
#include <vector>

struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void insert(TreeNode* &root, int val) {
    if (root == nullptr) {
        root = new TreeNode(val);
        return;
    }

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current->left == nullptr) {
            current->left = new TreeNode(val);
            return;
        } else {
            q.push(current->left);
        }

        if (current->right == nullptr) {
            current->right = new TreeNode(val);
            return;
        } else {
            q.push(current->right);
        }
    }
}

int deleteMax(TreeNode* &root) {
    std::priority_queue<int> maxHeap;
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        maxHeap.push(current->value);

        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }

    int maxValue = maxHeap.top();
    maxHeap.pop();

    q.push(root);
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current->left && current->left->value == maxValue) {
            delete current->left;
            current->left = nullptr;
            break;
        }
        if (current->right && current->right->value == maxValue) {
            delete current->right;
            current->right = nullptr;
            break;
        }

        if (current->left) {
            q.push(current->left);
        }
        if (current->right) {
            q.push(current->right);
        }
    }

    return maxValue;
}

void deleteTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    int val;
    std::vector<TreeNode*> nodes;
    int q, type;

    while (std::cin >> val) {
        if (val == -1) {
            nodes.push_back(nullptr);
        } else {
            nodes.push_back(new TreeNode(val));
        }
    }

    int i = 1;
    while (i < nodes.size()) {
        if (nodes[i] != nullptr) {
            nodes[i/2]->left = nodes[i];
            if (i+1 < nodes.size() && nodes[i+1] != nullptr) {
                nodes[i/2]->right = nodes[i+1];
            }
        }
        i += 2;
    }

    std::cin >> q;

    while (q--) {
        std::cin >> type;
        if (type == 1) {
            std::cin >> val;
            insert(nodes[0], val);
        } else if (type == 2) {
            int maxValue = deleteMax(nodes[0]);
            std::cout << maxValue << " ";
        }
    }

    deleteTree(nodes[0]);
    return 0;
}
