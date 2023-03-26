# Computer Graphics
### 3rd Year 2nd Semester - Computer Science & Engineering, University of Rajshahi

## Author
- **Ahnaf Shahrear Khan, Computer Science & Engineering, University of Rajshahi**
- **GitHub: [@ahnafshahrear](https://github.com/ahnafshahrear)**
- **Gmail: ahnafshahrearkhan@gmail.com**

## Index
- **Draw The National Flag of Bangladesh ✓**
- **Hidden Surface Elimination or Visual Surface Ditection ✓**
- **Two Dimentional Translation, Rotation & Scaling ✓**
- **Draw Sphere, Elipsoid & Torus**
- **Draw Super Elipsoid**
- **Create a Bejier Curve ✓**
- **Cohen Sutherland Line Clipping Algorithm ✓**
- **Polygon Clipping** 
- **Bresenham Line Drawing Algorithm ✓**
- **Bresenham Circle Drawing Algorithm ✓**
- **Fractal Geometry - Snowflake Pattern**

## CodeBlocks setup instructions
- Download **TDM GCC 32 Bit Compiler** from this link: https://jmeubank.github.io/tdm-gcc/
- Download Graphics Library: https://drive.google.com/file/d/1z19xxKm2YseQi7QGxqCCdJ-lLfiEGuCm/view
- Extract Graphics Library
- Copy **graphics.h & winbgim.h** and paste it in **"C:\\TDM-GCC-32\\include"**
- Copy **libbgi.a** and paste it in **"C:\\TDM-GCC-32\\lib"**
- Now go to **CodeBlocks -> Settings -> Compiler** 
- Go to "Toolchain executables" & change Compiler's installation directory to **"C:\\TDM-GCC-32"**
- Go to "Linker Settigns" -> Other linker options & add **"-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32"**
