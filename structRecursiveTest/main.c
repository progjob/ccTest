
#include <stdio.h>

typedef struct charItem charItem;

struct charItem {
    char ch;
    charItem *nextCahr;
};

void outCharItem(const charItem *, int);

int main(int argc, const char * argv[]) {
    printf("__\n\n");

// single struct & output
    charItem s1, s2, s3;
    s1.ch = 's';
    s2.ch = 'j';
    s3.ch = 'o';
    
    charItem charItems[] = {s1, s2, s3};
    for (int i = 0; i < 3; i++)
        outCharItem(&charItems[i], i);
    
// recursive output linkList
    
    
    
    printf("\n__\n");
    return 0;
}


void outCharItem(const charItem *c, int tabsCount) {
    for (int i = 0; i < tabsCount; i++)
        printf("\t");
    printf("%c\n", c->ch);
}
