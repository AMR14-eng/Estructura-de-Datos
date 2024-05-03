// Función para encontrar el nodo sucesor de un nodo dado 
struct TreeNode* findSuccessor(struct TreeNode* root, struct TreeNode* node) {
    if (node == NULL) {
        return NULL;
    }

    // Si el nodo tiene un subárbol derecho, entonces el sucesor es el nodo más pequeño en ese subárbol
    if (node->right != NULL) {
        struct TreeNode* current = node->right;
        while (current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    // Si no tiene subárbol derecho, entonces buscamos desde la raíz hasta el nodo para encontrar el sucesor
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

    return successor;
}