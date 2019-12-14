/*=====FUNCION *eliminarCancionesArtista=====
*/
void eliminarCancionesArtista(Map *mapaArtista, Map *mapaAlbum, Map *mapaCanciones){
    char *eliminado;

    printf("Ingrese el nombre del artista del que desea eliminar su informacion \n");
    scanf("%s",eliminado);

    datoArtista *auxiliar;
    auxiliar = searchMap(mapaArtista,eliminado);
    if(auxiliar==NULL) printf("El artista ingresado no fue encontrado");
    else{
        datoAlbum *nombreAlbum = list_first(auxiliar->albumes);
        while(nombreAlbum!=NULL){
            datoAlbum *auxiliarAlbum;
            auxiliarAlbum = searchMap(mapaAlbum,nombreAlbum);
            cancion *nombreCancion = list_first(auxiliarAlbum->canciones);
            while(nombreCancion!=NULL){
                eraseKeyMap(mapaCanciones,nombreCancion);
                nombreCancion = list_next(auxiliarAlbum->canciones);
            }
            eraseKeyMap(mapaAlbum,nombreAlbum);
            nombreAlbum = list_next(auxiliar->albumes);
        }
        eraseKeyMap(mapaArtista,eliminado);
    }
}  
