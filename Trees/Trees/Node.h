//
//  Node.h
//  Trees
//
//  Created by Malia Berner on 5/23/18.
//  Copyright © 2018 Malia Berner. All rights reserved.
//

#ifndef Node_h
#define Node_h

class Node{
public:
    Node();
    Node(int v);
    int get_key();
    int get_right();
    int get_left();
    void set_right(int v);
    void set_left(int v);
    void set_key(int v);
    bool operator==(const Node &other);
    
private:
    int key;
    Node *parent;
    Node *left;
    Node *right;
};

#endif /* Node_h */
