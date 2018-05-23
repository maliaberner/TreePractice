//
//  LinkedList.h
//  Trees
//
//  Created by Malia Berner on 5/14/18.
//  Copyright © 2018 Malia Berner. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h



class LinkedList{
public:
    LinkedList();
    void insert_at_head(node n);
    void insert_at_tail(node n);
private:
    node *head;
    node *tail;
};

#endif /* LinkedList_h */
