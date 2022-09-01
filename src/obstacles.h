#ifndef OBSTACLES_H
#define OBSTACLES_H

#include "SDL.h"
#include <vector>

class Obstacles
{
public:
  Obstacles(int grid_width, int grid_height)
      : grid_width(grid_width), grid_height(grid_height) {}

  void Update();

  void IncreaseObstacles(SDL_Point &p);
  bool ObstaclesCell(int x, int y);

  bool snake_alive{true};
  std::vector<SDL_Point> points;

private:
  void UpdateHead();
  void UpdateBody(SDL_Point &current_cell, SDL_Point &prev_cell);

  int grid_width;
  int grid_height;
};

#endif