/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        vector<int>arr;
        Node* curr=head;
        while(curr->next!=head){
            arr.push_back(curr->data);
            curr=curr->next;
        }
        arr.push_back(curr->data);
        arr.push_back(data);
        
        sort(arr.begin(),arr.end());
        Node* news=new Node(arr[0]);
        Node* temp=news;
        for(int i=1;i<arr.size();i++){
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
        temp->next=news;
        return news;
        
    }
};