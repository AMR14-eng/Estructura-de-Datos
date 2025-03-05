// Función para encontrar el nodo sucesor de un nodo dado 
struct TreeNode* findSuccessor(struct TreeNode* root, struct TreeNode* node) {
    if (node == NULL) {
        return NULL;
    }

    // Caso 1: Nodo dado tiene subárbol derecho
    if (node->right != NULL) {
        struct TreeNode* current = node->right;
        while (current->left != NULL) {
            current = current->left;
        }
        printf("El sucesor de %d es %d\n", node->val, current->val);
        return current;
    }

    // Caso 2: Nodo dado no tiene subárbol derecho
    struct TreeNode* successor = NULL;
    while (root != NULL) {
        if (node->val < root->val) {
            successor = root;
            root = root->left;
        } else if (node->val > root->val) {
            root = root->right;
        } else {
            break;
        }
    }

    if (successor != NULL) {
        printf("El sucesor de %d es %d\n", node->val, successor->val);
    } else {
        printf("No hay sucesor para %d\n", node->val);
    }

    return successor;
}
