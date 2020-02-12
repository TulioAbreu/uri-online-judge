#include <stdio.h>

#define TAM_CURUPIRA 300
#define TAM_BOITATA 1500
#define TAM_BOTO 600
#define TAM_MAPINGUARI 1000
#define TAM_LARA 150
#define TAM_DONA 225

int main(int argc, char const *argv[])
{
    int qt_curupira, qt_boitata, qt_boto, qt_mapinguari, qt_lara;
    scanf("%d %d %d %d %d", &qt_curupira, &qt_boitata, &qt_boto, &qt_mapinguari, &qt_lara);
    int sum = qt_curupira*TAM_CURUPIRA + qt_boitata*TAM_BOITATA + qt_boto*TAM_BOTO + qt_mapinguari*TAM_MAPINGUARI + qt_lara*TAM_LARA + TAM_DONA;
    printf("%d\n", sum);
    return 0;
}
