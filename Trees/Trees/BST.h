//
//  BST.h
//  Trees
//
//  Created by Malia Berner on 5/9/18.
//  Copyright © 2018 Malia Berner. All rights reserved.
//

#include "Node.h"

#ifndef BST_h
#define BST_h



class BST{
public:
    BST();
    Node root;
    void insert(Node x, int k);
    
    
    
private:
    bool is_initialized = false;
    
    
};

#endif /* BST_h */
