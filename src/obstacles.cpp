#include "obstacles.h"
#include <cmath>
#include <iostream>

void Obstacles::Update()
{
  UpdateHead();

  // Update all of the points vector items if the obstacles head has moved to a new
  // cell.
}

void Obstacles::UpdateHead()
{
  // Wrap the Obstacles around to the beginning if going off of the screen.
  ;
}

void Obstacles::UpdateBody(SDL_Point &current_head_cell,
                           SDL_Point &prev_head_cell)
{
  // Add previous head location to vector
  points.push_back(prev_head_cell);

  // Check if the obstacles has died.
  for (auto const &item : points)
  {
    if (current_head_cell.x == item.x && current_head_cell.y == item.y)
    {
      snake_alive = false;
    }
  }
}

void Obstacles::IncreaseObstacles(SDL_Point &p)
{
  points.push_back(p);
}

// Inefficient method to check if cell is occupied by obstacles.
bool Obstacles::ObstaclesCell(int x, int y)
{
  for (auto const &item : points)
  {
    if (x == item.x && y == item.y)
    {
      return true;
    }
  }
  return false;
}