#include <iostream>
using namespace std;

// Define the structure for a node
struct node { 
    int data; 
    node* next; 
}; 

class LinkedList {
    node* head; 
    int count; 

public: // Added public access specifier so methods can be accessed in main()
    LinkedList() { 
        head = nullptr; // C++ uses 'nullptr' instead of 'null'
        count = 0; 
    } 

    void create(int n) { 
        int value; 
        for(int i = 0; i < n; i++) { 
            cout << "Enter value: "; 
            cin >> value; 
            
            // Dynamically allocate memory for the new node
            node* nd = new node(); 
            nd->data = value;
            nd->next = nullptr;

            if(head == nullptr) { 
                head = nd; 
            } else { 
                node* t = head; 
                while(t->next != nullptr) { 
                    t = t->next; 
                } 
                t->next = nd; 
            } 
            count++; 
        } 
    } // Added missing closing brace for the create method

    void display() { 
        node* t = head; 
        while(t != nullptr) { 
            cout << t->data << " "; // Replaced Java's System.out.println with C++ cout
            t = t->next; 
        } 
        cout << endl;
    } 
}; 

int main() { 
    LinkedList l; 
    l.create(3); 
    l.display(); 
    return 0;
}
