#include <iostream>
using namespace std;

typedef struct Node{
    string songName;
    Node *link;

    }Node;

    Node *createNode(string data){
        Node *newNode = new Node;
        newNode->songName = data;
        newNode->link = NULL;
    
        return newNode;
    }


void traverse(Node *head){
    Node *temp = new Node;
    temp = head;

    cout << "My Playlist" << endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }

        temp = temp->link;
    }
}

Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        head = new Node;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;

    while(temp->link != NULL){
        temp = temp->link;
    }

    Node *newNode = createNode(data);
    temp->link = newNode;

    cout << "A new node has been inserted at the end \n" << endl;
    return head;

}

Node *insertAtBeginning(string data, Node *head){
    Node *newNode = createNode(data):
    newNode->link = head;

    head = newNode;

    cout << "A new mode has been inserted at the beginning \n" <<endl;
    
    return head;
}

string insertAfter(string after, string data, Node *head){
    Node *temp = new Node;
    temp = head;

    while(temp->songName.compare(after) != 0){
        if(temp == NULL){
            return "No such song exist, please try again later.";
        }

        temp = temp->link;
    }
    Node *newNode = createNode(data);
    newNode->link = temp->link;
    temp->link = newNode;

    return "An new node has been added after " + after + "\n";
}

int main(){
    Node *head = createNode("Sanctuary by Joji");

    head = insertAtEnd("Sunday Morning by Maroon 5", head);
    traverse(head);

    head = insertAtEnd("Palagi by Tj Monterde", head);
    head = insertAtEnd("Marilag by Dionela", head);
    head = insertAtEnd("Museo by Eliza Maturan", head);

    head = insertAtBeginning("Blue by Yung kai", head);
    head = insertAtBeginning("P.S I LOVE YOU by Paul Feat Yuna", head);
    head = insertAtBeginning("Every Summertime by NIKI", head);
    head = insertAtBeginning("Forever Young by Alphaville", head);

    head = insertAfter("Sinta by Rob Deniel.compare(after)", "Mahika by Adie.compare", head);
    head = insertAfter("Lihim by Arthur Miguel.compare(after)", "Kung Tayo by Skusta Clee.compare" , head);
    head = insertAfter("Hangang Kailan by Orange and Lemmons.compare(after)", "Dilaw by Maki", head);


    



    return 0;
}