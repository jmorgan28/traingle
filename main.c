#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {

  screen s;
  struct matrix *edges;
  struct matrix *edges2;
  struct matrix *edges3;

  color c;
 
  
  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);

  edges = new_matrix(4, 4);
  
  add_polygon(edges,6,7,0,56,78,0,234,320,0);
  
  print_matrix(edges);
  draw_polygons(edges,s,c);
  
  display(s);
  save_extension(s, "matrix.png");

  free_matrix( edges);
}
