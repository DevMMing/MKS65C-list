struct node { int i; struct node *next; };
void print_list(struct node * foo);
struct node * insert_front(struct node *foo, int x);
struct node * free_list(struct node *foo);