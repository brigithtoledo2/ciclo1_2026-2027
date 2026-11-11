#include <stdio.h>

void main () {
    int convertir_mb_gb = 1024;
    int cantidad_doc = 0;
    float tamano_doc = 0.0;
    int cantidad_img = 0;
    float tamano_img = 0.0;
    int cantidad_vid = 0;
    float tamano_vid = 0.0;
    int cantidad_prog = 0;
    float tamano_prog = 0.0;
    float disco_gb = 0.0;
    float documentos = 0.0;
    float imagenes = 0.0;
    float videos = 0.0;
    float programas = 0.0;
    float total_mb = 0.0;
    float total_gb = 0.0;
    float porcentaje = 0.0;
    float total = 0.0;


    printf("Por favor ingrese la cantidad de documentos: ");
    scanf("%d", &cantidad_doc);
    printf("Por favor ingrese el tamano de documentos (MB): ");
    scanf("%f", &tamano_doc);

    printf("Por favor ingrese la cantidad de imagenes: ");
    scanf("%d", &cantidad_img);
    printf("Por favor ingrese el tamano de imagenes (MB): ");
    scanf("%f", &tamano_img);

    printf("Por favor ingrese la cantidad de videos: ");
    scanf("%d", &cantidad_vid);
    printf("Por favor ingrese el tamano de videos (MB): ");
    scanf("%f", &tamano_vid);

    printf("Por favor ingrese la cantidad de programas: ");
    scanf("%d", &cantidad_prog);
    printf("Por favor ingrese el tamano de programas (MB): ");
    scanf("%f", &tamano_prog);

    printf("Por favor ingrese la capacidad del disco (GB): ");
    scanf("%f", &disco_gb);

    documentos = cantidad_doc * tamano_doc;
    imagenes = cantidad_img * tamano_img;
    videos = cantidad_vid * tamano_vid;
    programas = cantidad_prog * tamano_prog;
    total_mb = documentos + imagenes + videos + programas;
    total_gb = total_mb / 1024;
    porcentaje = (total_gb / disco_gb) * 100;
    
    printf("El espacio de documentos es %.2f MB \n", documentos);
    printf("El espacio de imagenes es %.2f MB \n", imagenes);
    printf("El espacio de videos es %.2f MB \n", videos);
    printf("El espacio de programas es %.2f MB \n", programas);
    printf("El espacio total utilizado es %.2f MB \n", total_mb);
    printf("El espacio total en GB es %.2f GB \n", total_gb);
    printf("El porcentaje de almacenamiento utilizado es %.2f %% \n", porcentaje);
    printf("La capacidad del disco es %.2f GB \n", disco_gb);

}
