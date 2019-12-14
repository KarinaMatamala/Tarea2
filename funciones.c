/*=====FUNCION *agregarCancion=====
*/
void agregarCancion(Map *mapaCanciones, Map *mapaAlbum, Map *mapaArtista){
    char *nombre;
    char *artista;
    char *duracion;
    char *album = 'unknow';

    printf("Ingrese el nombre de la cancion, junto con su  artista y duracion todo separado por comas\n");
    scanf("%[,]s",nombre);
    scanf("%[,]s",artista);
    scanf("%[,]s",duracion);


    cancion *nueva = crear_cancion(nombre,artista,duracion,album);
    if(searchMap(mapaCanciones,nombre)==NULL){
        insertMap(mapaCanciones,nombre,nueva);
    }
    printf("\n Cancion agregada con exito c:\n");
}
/*=====FUNCION *buscarCancion=====
*/
void buscarCancion(Map *mapaCanciones){
    char *nombre;

    printf("¿Que cancion desea buscar ?\n");
    scanf("%s",nombre);
    cancion *mostrar;
    mostrar=searchMap(mapaCanciones,nombre);
    if(mostrar==NULL){
        printf("La cancion ingresada no se encontro \n");
    }
    else{
        printf("Nombre: %s\nArtista:%s\nAlbum:%sDuracion:%s\n", mostrar->nombre, mostrar->artista, mostrar->album, mostrar->duracion);
    }
