#include "headers.hpp"

int main(){
    Image* i1 = new Image("images/images.jpeg");
    User* u1 = new User("user1","user1@gmail.com","user");
    //MM_Post<Image>* p1 = new MM_Post<Image>("Hello",u1,i1);
    Post* p1 = new Post("Hello",u1,0,0,i1);
    Message* mp1 = new Message_Post(p1);

   // mp1->display();

    p1->display_post_details();
}