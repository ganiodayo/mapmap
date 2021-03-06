/*
 * Triangle.h
 *
 * (c) 2016 Sofian Audry -- info(@)sofianaudry(.)com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Polygon.h"

namespace mmp {

/**
 * Triangle shape.
 */
class Triangle : public Polygon
{
  Q_OBJECT
public:
  Q_INVOKABLE Triangle() {}
  Triangle(QPointF p1, QPointF p2, QPointF p3)
  {
    _addVertex(p1);
    _addVertex(p2);
    _addVertex(p3);
    build();
  }
  virtual ~Triangle() {}
  virtual QString getType() const { return "triangle"; }

protected:
  /// Returns a new MShape (using default constructor).
  virtual MShape* _create() const { return new Triangle(); }
};


}

#endif /* TRIANGLE_H_ */
