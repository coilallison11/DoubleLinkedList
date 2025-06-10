//****************************************************************************************************
//
//         File:                        Node.h
//
//         Student:                     Allison Coil
//
//         Assignment:                  Program #10
//
//         Course Name:                 Data Structures   I
//
//         Course Number:               COSC 3050 - 01
//
//         Due:                         Apr 21, 2021
//
//
//         This structure creates a single node for use in a doubly linked list. It holds data of
//		   an unknown type as well as the address of the next node in the list and the address of
//		   the previous node in the list.
//****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//****************************************************************************************************

template <typename TYPE>
struct Node
{
	TYPE data;
	Node <TYPE> * next;
	Node <TYPE> * prev;

	Node ();
	Node ( TYPE d, Node <TYPE> * n = nullptr, Node <TYPE> * p = nullptr );
};

//****************************************************************************************************

template <typename TYPE>
Node <TYPE> ::Node ()
{
	data = 0;
	next = nullptr;
	prev = nullptr;
}

//****************************************************************************************************

template <typename TYPE>
Node <TYPE> ::Node( TYPE d, Node <TYPE> * n, Node <TYPE> * p )
{
	data = d;
	next = n;
	prev = p;
}

//****************************************************************************************************

#endif