vector<vector<long long>> bfs(TreeNode* root) {
        vector<vector<long long>> levels; // Vector to store values of each level
        if (root == nullptr)
            return levels; // If the tree is empty

        queue<TreeNode*> q; // Create a queue to hold nodes
        q.push(root);       // Enqueue the root node

        while (!q.empty()) {
            long long levelSize =
                q.size(); // Get the number of nodes at the current level
            vector<long long>
                currentLevel; // Vector to store values of the current level

            for (long long i = 0; i < levelSize; ++i) {
                TreeNode* current = q.front(); // Get the front node
                q.pop();                       // Dequeue the front node
                currentLevel.push_back(
                    current->val); // Add the node's value to the current level

                // Enqueue the left child
                if (current->left != nullptr) {
                    q.push(current->left);
                }

                // Enqueue the right child
                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }

            levels.push_back(
                currentLevel); // Add the current level to the levels vector
        }

        return levels; // Return the vector of levels
    }
