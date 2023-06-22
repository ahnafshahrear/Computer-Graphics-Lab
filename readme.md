# Computer Graphics Lab
- **3rd Year 2nd Semester, Computer Science & Engineering, University of Rajshahi**
- **GitHub: [@ahnafshahrear](https://github.com/ahnafshahrear) | Gmail: ahnafshahrearkhan@gmail.com**

## Lab Tasks
- **Draw The National Flag of Bangladesh ✓**
- **Simulate Hidden Surface Elimination or Visual Surface Ditection ✓**
- **Simulate Two Dimentional Translation, Rotation & Scaling ✓**
- **Create a Bejier Curve ✓**
- **Implement the Cohen Sutherland Line Clipping algorithm ✓**
- **Implement the Sutherland Hodgman Polygon Clipping algorithm** 
- **Implement the Bresenham Line Drawing Algorithm ✓**
- **Implement the Bresenham Circle Drawing Algorithm ✓**
- **Draw the Snowflake Pattern with Fractal Geometry**

## CodeBlocks Setup Instructions
- Download **TDM GCC 32 Bit Compiler** from this link: https://jmeubank.github.io/tdm-gcc/
- Download Graphics Library: https://drive.google.com/file/d/1z19xxKm2YseQi7QGxqCCdJ-lLfiEGuCm/view
- Extract Graphics Library
- Copy **graphics.h & winbgim.h** and paste it in **"C:\\TDM-GCC-32\\include"**
- Copy **libbgi.a** and paste it in **"C:\\TDM-GCC-32\\lib"**
- Now go to **CodeBlocks -> Settings -> Compiler** 
- Go to "Toolchain executables" & change Compiler's installation directory to **"C:\\TDM-GCC-32"**
- Go to "Linker Settigns" -> Other linker options & add **"-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32"**
