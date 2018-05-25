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

void Node::set_key(int v){
    key = v;
}

int Node::get_right(){
    return right->get_key();
}
int Node::get_left(){
    return left->get_key();
}

void Node::set_right(int v){
    right = new Node(v);
}
void Node::set_left(int v){
   left = new Node(v);
}


