//
//  Node.cpp
//  Trees
//
//  Created by Malia Berner on 5/23/18.
//  Copyright © 2018 Malia Berner. All rights reserved.
//

#include <stdio.h>
#include "Node.h"
#include<iostream>
#include<cstdio>
#include<cstdlib>

Node::Node(){
    key = NULL;
}
Node::Node(int v){
    key = v;
}

int Node::get_key(){
    return key;
}

Node Node::get_right(){
    return *right;
}
Node Node::get_left(){
    return *left;
}

void Node::set_right(int v){
    right = new Node(v);
}
void Node::set_left(int v){
   left = new Node(v);
}
