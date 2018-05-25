//
//  BST.cpp
//  Trees
//
//  Created by Malia Berner on 5/9/18.
//  Copyright © 2018 Malia Berner. All rights reserved.
//

#include "BST.h"
#include "Node.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>



BST::BST(){
    is_initialized = true;
    Node root;
}

void BST::test(){
    root.set_right(8);
    int x = root.get_right();
    std::cout << x;
    
}


void BST::insert(Node x, int k){
    
    if(x.get_key() == k || x.get_key() == NULL){
        root.set_key(k);
        root.set_left(NULL);
        root.set_right(NULL);
        std::cout << " " << root.get_key();
    }
    
    else if(x.get_key() < k){
        if(x.get_right() != NULL){
            insert(x.get_right(), k);
        }
        else(x.set_right(k));
        std::cout << "  " << x.get_right();
    }
    else if(x.get_key() > k){
        if(x.get_left() != NULL){
            insert(x.get_left(), k);
        }
        else(x.set_left(k));
        std::cout << "\n" << x.get_left();
    }
    
}


