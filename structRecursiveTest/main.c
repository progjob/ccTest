
#include <stdio.h>

typedef struct charItemStruct charItem;

struct charItemStruct {
    int ch;
    charItem *nextCharItem;
};


void outCharItem(const charItem *, int);

charItem* makeLinkedListFromItemsArray(charItem [], int arrayLength);


int main(int argc, const char * argv[]) {
    printf("__\n\n");

// single struct & output
    charItem s1 = {1, NULL};
    charItem s2 = {2, NULL};
    charItem s3 = {3, NULL};
    
    charItem charItems[] = {s1, s2, s3};
    for (int i = 0; i < 3; i++) {
        outCharItem(&charItems[i], i);
    }
    
    
// recursive output linkList
    
    charItem *pList1 = makeLinkedListFromItemsArray(charItems, 3);
    outCharItem(pList1, 0);
    
    charItem *pList2 = pList1->nextCharItem;
    outCharItem(pList2, 0);

    charItem *pList3 = pList2->nextCharItem;
    outCharItem(pList3, 0);
    
    
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
    for (int i = 0; i < tabsCount; i++) printf("\t");
    printf("%d |\n", c->ch);
}
