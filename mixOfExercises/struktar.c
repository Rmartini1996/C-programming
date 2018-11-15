#include <stdio.h> 

typedef struct{
    char *Title;
    char *Artist;
    unsigned short Year;
    unsigned short Tracks;
}Album;

Album fillData(){
    Album temp;
    
    temp.Title  = "Sounds of a playground fading";
    temp.Artist = "In flames";
    temp.Year   = 2011;
    temp.Tracks = 13;

    return temp;
}
void printAlbum(Album *theAlbum){
    printf("Album information: \n");
    printf("Title: %s\n", theAlbum->Title);
    printf("Artist: %s\n",  theAlbum->Artist);
    printf("Year: %d\n",  theAlbum->Year);
    printf("Tracks: %d\n",theAlbum->Tracks);
}

int main(){
    Album myAlbum, newAlbum;

    myAlbum.Title  = "true";
    myAlbum.Artist = "avicii";
    myAlbum.Year   = 2013;
    myAlbum.Tracks = 12;

    newAlbum = fillData();

    printAlbum(&myAlbum);
    printf("-------------------------------------------------\n");
    printAlbum(&newAlbum);
    return 0;
}
