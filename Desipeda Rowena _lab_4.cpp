#include <iostream>
#include <string>
using namespace std;

string karaoke_queue[100];

int front = 0;
int rear = -1;
int max_queue = 10;

bool isFull(){
    if(rear == max_queue -1){
        return true;
    }

    return false;
}

bool isEmpty(){
    if(rear == -1){
        return true;
    }

    return false;
}

string enqueue(string song){
    if(isFull()){
        return "The queue is full. Try again later";
    }

    karaoke_queue[++rear] = song;
    return "A new song has been added in the queue";
}

string dequeue(){
    if(isEmpty()){
        return "There is no song in the queue. Try adding first";
    }

    string song = karaoke_queue[front];

    for (int i=1; i <= rear; i++){
        karaoke_queue[i-1] = karaoke_queue[i];
    }

    rear--;
    return song;
}

int main(){
    string song=("Sining","Musika","Lalim");
    cout << enqueue("Sining") << endl;
    cout << enqueue("Musika") << endl;
    cout << enqueue("Lalim") << endl;


    for (int i=0; i <= rear; i++){
        cout << karaoke_queue[i] << endl;
    }

     
    dequeue();
    dequeue(); 

    cout << "Remiming Song in queue" << endl;
     for (int i=0; i <= rear; i++){
        cout << karaoke_queue[i] << endl;
    }
    
    cout << enqueue("Die with Smile") << endl;
    cout << enqueue("Luther") << endl;
    cout << enqueue("APT") << endl;
    cout << enqueue("Birds of a feather") << endl;
    cout << enqueue("Ordinary") << endl;
    cout << enqueue("Burn") << endl;
    cout << enqueue("Puso Bato") << endl;
    cout << enqueue("Dadalhin") << endl;


    cout << "Queue is now full or rear full." << endl;
    cout << "Dequeuering one element:" << endl;

    cout << enqueue("Photograph") << endl;

    cout << "Queue after dequeue and enqueue:" << dequeue() << endl;
    for(int i=0; i <= rear; i++){
        cout << karaoke_queue[i] << endl;
    }
    
    return 0;
}