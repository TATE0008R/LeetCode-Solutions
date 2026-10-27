// 0 ms | 11.7 MB
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *temp1=list1;
    struct ListNode *temp2=list2;
    int temp=0;
    if(list1==NULL && list2==NULL){
        return list1;
    }else if(list1==NULL&& list2){
        return list2;
    }else if(list2==NULL&& list1){
        return list1;
    }else{
        if(temp1->val<temp2->val){
            while(temp1->next){
            temp1=temp1->next;
        }
        temp1->next=temp2;
        temp1 = list1;
        struct ListNode *i;
        struct ListNode *j;

        for(i=temp1;i->next!=NULL;i=i->next){
            for(j=temp1->next;j->next!=NULL;j=j->next){
                if(j->val>j->next->val){
                    temp = j->val;
                    j->val=j->next->val;
                    j->next->val=temp;
                }
            }
        }
        return temp1;
        }else{
            while(temp2->next){
            temp2=temp2->next;
        }
        temp2->next=temp1;
        temp2 = list2;
        struct ListNode *i;
        struct ListNode *j;

        for(i=temp2;i->next!=NULL;i=i->next){
            for(j=temp2->next;j->next!=NULL;j=j->next){
                if(j->val>j->next->val){
                    temp = j->val;
                    j->val=j->next->val;
                    j->next->val=temp;
                }
            }
        }
        return temp2;
        }
        
    }


}