int main(){

    char opc[5];
    unsigned short opcion=0;
    Map * mapaCanciones=createMap(stringHash, stringEqual);
    Map * mapaAlbum = createMap(stringHash, stringEqual);
    Map * mapaArtistas = createMap(stringHash, stringEqual);
//--------------------------------PROCESO------------------------------

    while(opcion!=9){
        printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("* ----------------------------------------- *\n");
        printf("*           ORGANIZADOR DE MUSICA           *\n");
        printf("* ----------------------------------------- *\n");
        printf("*               Ingrese Opcion              *\n");
        printf("*                                           *\n");
        printf("* [1] Importar musica desde un archivo      *\n");
        printf("* [2] Exportar musica a CSV                 *\n");
        printf("* [3] Agregar album                         *\n");
        printf("* [4] Agregar cancion                       *\n");
        printf("* [5] Eliminar canciones de un artista      *\n");
        printf("* [6] Buscar cancion                        *\n");
        printf("* [7] Buscar canciones de un artista        *\n");
        printf("* [8] Buscar album                          *\n");
        printf("* [9] Salir                                 *\n");
        printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
        printf("\n");
        validarOpcion(opc,opcion);
        opcion=atoi(opc);
        system("cls");

        switch (opcion){

        case 1 : importarMusicaArchivo(mapaCanciones, mapaAlbum, mapaArtistas);
            system("pause");
        break;

        case 2 : exportarMusicaCSV(mapaCanciones, mapaAlbum, mapaArtistas);
            system("pause");

        break;

        case 3 : agregarAlbum(mapaAlbum, mapaCanciones, mapaArtistas);
            system("pause");
        break;

        case 4: agregarCancion(mapaCanciones, mapaAlbum, mapaArtistas);
            system("pause");
        break;

        case 5: eliminarCancionesArtista(mapaArtistas, mapaAlbum, mapaCanciones);
            system("pause");
        break;

        case 6: buscarCancion(mapaCanciones);
            system("pause");
        break;

        case 7: buscarCancionesArtista(mapaArtistas, mapaAlbum, mapaCanciones);
            system("pause");
        break;

        case 8: buscarAlbum(mapaAlbum);
            system("pause");
        break;

        }
    }

    printf("\n\n  Gracias por preferirnos c: \n");
    return 0;

}