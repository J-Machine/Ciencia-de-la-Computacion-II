#ifndef __NODE_H__
#define __NODE_H__

class Node {
        int value;
        Node *next;
    public:
        Node(int);

        int getValue() const;
        void setValue(int);

        void setNext(Node *);
        Node *getNext() const;

};

#endif