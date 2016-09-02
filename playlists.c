#include <stdio.h>

char* titles[] = {"Freebird", "YMCA" , "Sandstorm"};
char* artists[] = {"Lynard Skynard", "Village People", "Darude"}; 

struct song_t{
	char* title;
	char* artist;
};

struct node_t{
	struct song_t* song;
	struct node_t* next;
};

struct playlist_t{
	char* name;
	struct node_t* head;
};

void print(struct playlist_t* pl){
	struct node_t* ptr;
	ptr = pl->head;
	while(ptr->next != NULL){
		printf("%s by %s\n",ptr->song->title,ptr->song->artist);
		ptr= ptr->next;
	}
}

int main(int argc, char* argv[]){
	//struct song_t song;
	
	//song.title = titles[0];
	//song.artist = artists[0];
	struct song_t freebird, ymca, sandstorm;
	freebird.title = titles[0];
	freebird.artist = artists[0];
	ymca.title = titles[1];
	ymca.artist = artists[1];
	sandstorm.title = titles[2];
	sandstorm.artist = artists[2];
	struct playlist_t pl1, pl2;
	struct node_t p1_s1, p1_s2, p1_s3;
	struct node_t p2_s1, p2_s2, p2_s3;

	pl1.name = "Chill";
	pl1.head = &pl1_s1;
	pl1_s1.song = &ymca;
	pl1_s1.next = &pl1.s2;
	pl1_s2.song = &freebird;
	pl1.s2.next = NULL;
	return 0;
	print(&pl1);
}
