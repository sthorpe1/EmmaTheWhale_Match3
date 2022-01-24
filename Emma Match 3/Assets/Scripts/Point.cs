using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Point
{
    // Declare variables for coordinates
    public int x;
    public int y;

    // Default constructor for a new Point
    public Point(int nx, int ny) 
    {
        x = nx;
        y = ny;
    }

    // Directly multiplies variables in class
    public void mult(int m) 
    {
        x *= m;
        y *= m;
    }

    // Directly adds variables in class
    public void add(Point p) 
    {
        x += p.x; 
        y += p.y;
    }

    //  Return the location vector is going to
    public Vector2 ToVector() 
    {
        return new Vector2(x, y);
    }

    //  Returns bool based on if a Point is equal to class x and y coordinates
    public bool Equals(Point p) 
    {
        return (x == p.x && y == p.y);
    }

    // Returns a pointer with position of Vector2 (uses integer casting)
    public static Point fromVector(Vector2 v) 
    {
        return new Point((int)v.x, (int)v.y);
    }

    // Returns a pointer with position of Vector3 (uses integer casting)
    public static Point fromVector(Vector3 v) 
    {
        return new Point((int)v.x, (int)v.y);
    }

    // Multiplies Point by m
    public static Point mult(Point p, int m) 
    {
        return new Point(p.x * m, p.y * m);
    }

    // Adds two Points together
    public static Point add(Point p, Point o) 
    {
        return new Point(p.x + o.x, p.y + o.y);
    }

    // Clones a Point using the same variables
    public static Point clone(Point p) 
    {
        return new Point(p.x, p.y);
    }



    // Functions to allow movement of points

    public static Point zero 
    {
        get { return new Point(0, 0); }
    }

    public static Point one 
    {
        get { return new Point(1, 1); }
    }

    public static Point up 
    {
        get { return new Point(0, 1); }
    }

    public static Point down
    {
        get { return new Point(0, -1); }
    }

    public static Point right
    {
        get { return new Point(1, 0); }
    }

    public static Point left 
    {
        get { return new Point(-1, 0); }
    }
}
