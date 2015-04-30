
#include <stdio.h>
#include <stdlib.h>

typedef struct charItemStruct charItem;

struct charItemStruct {
    int ch;
    charItem *nextCharItem;
};


void outCharItem(const charItem *, int);
void outCharItemsListRecursive(const charItem *);

charItem* makeLinkedListFromItemsArray(charItem [], int arrayLength);


int main(int argc, const char * argv[]) {
    printf("__\n\n");

//create items array
    int zize = 9;

    charItem *charItems = (charItem *) malloc( zize * sizeof(charItem) );

    for (int i = 0; i < zize; i++) {
        charItem s1 = {i * 10 + 10, NULL};
        *(charItems+i) = s1; // == charItems[i] = s1;
    }
    
// recursive output linkList
    
    charItem *list = makeLinkedListFromItemsArray(charItems, zize);
    outCharItemsListRecursive(list);
    
    printf("\n__\n");
    return 0;
}


charItem* makeLinkedListFromItemsArray(charItem items[], int length) {
    for (int i = 0; i < length - 1; i++) {
        items[i].nextCharItem = &items[i+1];
    }
    return &items[0];
}

void outCharItem(const charItem *c, int tabsCount) {
    for (int i = 0; i < tabsCount; i++) {
        printf("\t");
    }
    printf("| %d |\n", c->ch);
}

void outCharItemsListRecursive(const charItem *item) {
    if (item->nextCharItem != NULL) {
        outCharItem(item, 0);
        outCharItemsListRecursive(item+1);
    }
}

