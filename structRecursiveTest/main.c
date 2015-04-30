//
//  main.c
//  structRecursiveTest
//
//  Created by Jone Doe on 30/04/15.
//  Copyright (c) 2015 Jone Doe. All rights reserved.
//

#include <stdio.h>

typedef struct charItem charItem;

struct charItem {
    char ch;
    charItem *nextCahr;
};

void outCharItem(const charItem *c, int tabsCount) {
    for (int i = 0; i < tabsCount; i++)
        printf("\t");
    printf("%c\n", c->ch);
}

int main(int argc, const char * argv[]) {
    printf("__\n\n");
    
    charItem s1, s2, s3;
    s1.ch = 's';
    s2.ch = 'j';
    s3.ch = 'o';
    
    charItem charItems[] = {s1, s2, s3};
    for (int i = 0; i < 3; i++)
        outCharItem(&charItems[i], i);
    
    
    printf("\n__\n");
    return 0;
}
