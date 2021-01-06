#include <bits/stdc++.h> 
using namespace std;


class Contact {
    public:
    string data;
    Contact *next;
};

void push(Contact** head_ref, string new_data){
    Contact* new_contact = new Contact();
    new_contact->data = new_data;
    new_contact->next = (*head_ref);
    (*head_ref) = new_contact;
};

void insertAfter (Contact* prev_contact, string new_data){
    if (prev_contact == NULL){
		cout<<"the given previous node cannot be NULL"; 
        return;
    }
    Contact* new_contact = new Contact();
    new_contact->data = new_data;
    new_contact->next = prev_contact->next;
    prev_contact->next = new_contact;
};

void append(Contact** head_ref, string new_data){
    Contact* new_contact = new Contact();
    Contact *last = *head_ref;
    new_contact->data = new_data;
    new_contact->next = NULL;
    if (*head_ref == NULL){
        *head_ref = new_contact;
        return;
    }
    while (last->next != NULL)
        last = last->next;
        last->next = new_contact;
        return;
       
    
};

void printInfo(Contact *c){
    while (c != NULL)
    {
        cout<< c->data << "\n\n";
        c = c->next;
    }
    
};

int main(){
    string x,y,z, L, J, K, H, G;
    
   cout<<"Contact details: \n";
cout<<"-------------------------------------- \n";
                                         

    Contact* head = NULL;
    Contact* second = NULL;
    Contact* third = NULL;
    Contact* forth = NULL;
    Contact* fifth = NULL;
    Contact* sixth = NULL;
    Contact* seventh = NULL;
    Contact* eighth = NULL;
    Contact* ninth = NULL;
    Contact* tenth = NULL;
    Contact* eleventh = NULL;
    Contact* twelfth = NULL;
    Contact* thirteenth = NULL;
    Contact* fourteenth = NULL;
    Contact* fifteenth = NULL;
    Contact* sixteenth = NULL;
    Contact* seventeenth = NULL;
    Contact* eighteenth = NULL;
    Contact* nineteenth = NULL;
    Contact* twentieth = NULL;
    Contact* twentyFirst = NULL;
    Contact* twentySecond = NULL;
    Contact* twentyThird = NULL;
    Contact* twentyForth = NULL;
    Contact* twentyFifth = NULL;
    Contact* twentySixth = NULL;
    Contact* twentySeventh = NULL;
    Contact* twentyEighth = NULL;
    Contact* twentyNinth = NULL;
    Contact* thirty = NULL;
    Contact* thirtyFirst = NULL;
    Contact* thirtySecond = NULL;
    Contact* thirtyThird = NULL;
    Contact* thirtyForth = NULL;
    // Contact* thirtyFifth = NULL;
    // Contact* thirtySixth = NULL;
    // Contact* thirtySeventh = NULL;
    // Contact* thirtyEighth = NULL;
    // Contact* thirtyNinth = NULL;
    // Contact* forty = NULL;
    // Contact* fortyFirst = NULL;
    // Contact* fortySecond = NULL;
    // Contact* fortyThird = NULL;
    // Contact* fortyForth = NULL;
    // Contact* fortyFifth = NULL;
    // Contact* fortySixth = NULL;
    // Contact* fortySeventh = NULL;
    // Contact* fortyEighth = NULL;
    // Contact* fortyNinth = NULL;
    // Contact* fiftieth = NULL;
    // Contact* fiftiethFirst = NULL;
    

    head = new Contact();
    second = new Contact();
    third = new Contact();
    forth = new Contact();
    fifth = new Contact();
    sixth = new Contact();
    seventh = new Contact();
    eighth = new Contact();
    ninth = new Contact();
    tenth = new Contact();
    eleventh = new Contact();
    twelfth = new Contact();
    thirteenth = new Contact();
    fourteenth = new Contact();
    fifteenth = new Contact();
    sixteenth = new Contact();
    seventeenth = new Contact();
    eighteenth = new Contact();
    nineteenth = new Contact();
    twentieth = new Contact();
    twentyFirst = new Contact();
    twentySecond = new Contact();
    twentyThird = new Contact();
    twentyForth = new Contact();
    twentyFifth = new Contact();
    twentySixth = new Contact();
    twentySeventh = new Contact();
    twentyEighth = new Contact();
    twentyNinth = new Contact();
    thirty = new Contact();
    thirtyFirst = new Contact();
    thirtySecond = new Contact();
    thirtyThird = new Contact();
    thirtyForth = new Contact();
    // thirtyFifth = new Contact();
    // thirtySixth = new Contact();
    // thirtySeventh = new Contact();
    // twentyEighth = new Contact();
    // thirtyNinth = new Contact();
    // forty = new Contact();
    // fortyFirst = new Contact();
    // fortySecond = new Contact();
    // fortyThird = new Contact();
    // fortyForth = new Contact();
    // fortyFifth = new Contact();
    // fortySixth = new Contact();
    // fortySeventh = new Contact();
    // fortyEighth = new Contact();
    // fortyNinth = new Contact();
    // fiftieth = new Contact();
    // fiftiethFirst = new Contact();


    head->data="Name: abdallh";
    head->next=second;
    second->data="Given Name: oscar";
    second->next=third;
    third->data="Additional Name: None";
    third->next=forth;
    forth->data="Family Name: Ahmed";
    forth->next=fifth;
    fifth->data="Yomi Name:None";
    fifth->next=sixth;
    sixth->data="Given Name Yomi: ahmed";
    sixth->next=seventh;
    seventh->data="Additional Name Yomi: None";
    seventh->next=eighth;
    eighth->data="Family Name Yomi: ahmed";
    eighth->next=ninth;
    ninth->data="Name Prefix: A";
    ninth->next=tenth;
    tenth->data="Name Suffix: M";
    tenth->next=eleventh;
    eleventh->data="Initials: ABD";
    eleventh->next=twelfth;
    twelfth->data="Nickname: Oscar";
    twelfth->next=thirteenth;
    thirteenth->data="Short Name: oscar";
    thirteenth->next=fourteenth;
    fourteenth->data="Maiden Name: Ahmed";
    fourteenth->next=fifteenth;
    fifteenth->data="Birthday: 12/8/2000";
    fifteenth->next=sixteenth;
    sixteenth->data="Gender: Male";
    sixteenth->next=seventeenth;
    seventeenth->data="Location: khurtom";
    seventeenth->next=eighteenth;
    eighteenth->data="Billing Information: None";
    eighteenth->next=nineteenth;
    nineteenth->data="Directory Server: None";
    nineteenth->next=twentieth;
    twentieth->data="Mileage: None";
    twentieth->next=twentyFirst;
    twentyFirst->data="Occupation: None";
    twentyFirst->next=twentySecond;
    twentySecond->data="Hobby: Football, Video games";
    twentySecond->next=twentyThird;
    twentyThird->data="Sensitivity: None";
    twentyThird->next=twentyForth;
    twentyForth->data="Priority: None";
    twentyForth->next=twentyFifth;
    twentyFifth->data="Subject: Computer eng.";
    twentyFifth->next=twentySixth;
    twentySixth->data="Notes: Sweetheart";
    twentySixth->next=twentySeventh;
    twentySeventh->data="Language: English, العربية";
    twentySeventh->next=twentyEighth;
    twentyEighth->data="Photo: None";
    twentyEighth->next=twentyNinth;
    twentyNinth->data="Group Membership:blue";
    twentyNinth->next=thirty;
    thirty->data="E-mail 1 - Type: G-mail";
    thirty->next=thirtyFirst;
    thirtyFirst->data="E-mail 1 - Value: hjjkkg@gmail.com";
    thirtyFirst->next=thirtySecond;
    thirtySecond->data="E-mail 2 - Type: G-mail";
    thirtySecond->next=thirtyThird;
    thirtyThird->data="E-mail 2 - Value: jjgfchjhj@gmail.com";
    thirtyThird->next=thirtyForth;
    thirtyForth->data="Phone 1 - Type: Mobile";
    // thirtyForth->next=thirtyFifth;
    // thirtyFifth->data="Phone 1 - Value: 0118544293";
    // thirtyFifth->next=thirtySixth;
    // thirtySixth->data="Phone 2 - Type: Internet call";
    // thirtySixth->next=thirtySeventh;
    // thirtySeventh->data="Phone 2 - Value: 09078638";
    // thirtySeventh->next=thirtyEighth;
    // thirtyEighth->data="Phone 3 - Type: Home";
    // thirtyEighth->next=thirtyNinth;
    // thirtyNinth->data="Phone 3 - Value: 0155146282";
    // thirtyNinth->next=forty;
    // forty->data="Phone 4 - Type: None";
    // forty->next=fortyFirst;
    // fortyFirst->data="Phone 4 - Value: None";
    // fortyFirst->next=fortySecond;
    // fortySecond->data="Organization 1 - Type:None";
    // fortySecond->next=fortyThird;
    // fortyThird->data="Organization 1 - Name: None";
    // fortyThird->next=fortyForth;
    // fortyForth->data="Organization 1 - Yomi Name: None";
    // fortyForth->next=fortyFifth;
    // fortyFifth->data="Organization 1 - Title:None";
    // fortyFifth->next=fortySixth;
    // fortySixth->data="Organization 1 - Department: Computer and Electricity";
    // fortySixth->next=fortySeventh;
    // fortySeventh->data="Organization 1 - Symbol: NonE";
    // fortySeventh->next=fortyEighth;
    // fortyEighth->data="Organization 1 - Location: New York, New York, US";
    // fortyEighth->next=fortyNinth;
    // fortyNinth->data="Organization 1 - Job Description: NONE";
    // fortyNinth->next=fiftieth;
    // fiftieth->data="Website 1 - Type: None";
    // fiftieth->next=fiftiethFirst;
    // fiftiethFirst->data="Website 1 - Value: None";
    // fiftiethFirst->next=NULL;
   
    printInfo(head);

    cout<<"Which operation do you want to do?\n(add, delete, edit, combine, search): \n";
    cin>> L;
    if (L == "add"){
        cout<<"do you want to push, insert after, append: ";
        cin>> K;
        if (K == "push"){
            cout<<"Insert your field: ";
            cin>> J;
            push(&head, J);cout<<endl;
        }else if(K == "insert after"){
            cout<<"Insert your field: ";
            cin>> G;
            insertAfter(head->next, G);cout<<endl;
        }else if (K == "append"){
            cout<<"Insert your field: ";
            cin>> H;
            append(&head, H);cout<<endl;
        }
    }
    printInfo(head);


    return 0;

}














