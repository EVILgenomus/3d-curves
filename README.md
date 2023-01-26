# 3d-curves

This is a simple implementation of 3D curves hierarchy. There are realized supporting of circles, ellipses and 3D helixes. 
All curves are parametrically defined:
- Circle is planar in the plane XoY (i.e. all Z-coordinates are 0) and is defined by its radius.
- Ellipse is planar in the plane XoY and is defined by its two radii, along X and Y axes.
- Helix is spatial and is defined by its radius and step (see the figure below). It takes 2 * PI in
parametric space to make a round, i.e. any point on helix satisfies the condition C(t + 2*PI) = C(t) +
{0, 0, step}.

For example, the following tasks were completed:
1. Populate a container (e.g. vector or list) of objects of these types created in random manner with
random parameters.
2. Print coordinates of points and derivatives of all curves in the container at t=PI/4.
3. Populate a second container that would contain only circles from the first container. Make sure the
second container shares (i.e. not clones) circles of the first one, e.g. via pointers.
4. Sort the second container in the ascending order of circles’ radii. That is, the first element has the
smallest radius, the last - the greatest.
5. Compute the total sum of radii of all curves in the second container.
