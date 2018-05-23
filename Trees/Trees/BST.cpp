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
    Node root();
}



void BST::insert(Node x, int k){
    
    if(x.get_key() == k || x.get_key() == NULL){
        std::cout << k;
        std::cout << x.get_right().get_key();
    }
    
    else if(x.get_key() < k){
        if(x.get_right().get_key() != NULL){
            insert(x.get_right(), k);
        }
        else(x.set_right(k));
    }
    
}

/*
void BST::insert(Node x, int k){
    if(x.key > k){
        
        std::cout<<(x.get_left());
        if(x.get_left() == NULL){
            x. = &k;
        }
        else{
            insert(*x.left, k);
        }
    }
    else if(x.key > k.key){
        if(x.right == NULL){
            x.right = &k;
        }
        else{
            insert(*x.right, k);
        }
    }
}*/


