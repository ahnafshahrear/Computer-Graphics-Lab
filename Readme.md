# Computer Graphics
### 3rd Year 2nd Semester - Computer Science & Engineering, University of Rajshahi
### Course Code: CSE3222

## Author
- **Ahnaf Shahrear Khan, Computer Science & Engineering, University of Rajshahi**
- **GitHub: [@ahnafshahrear](https://github.com/ahnafshahrear)**
- **Gmail: ahnafshahrearkhan@gmail.com**

## CodeBlocks setup instructions
- Download **TDM GCC 32 Bit Compiler** from this link: https://jmeubank.github.io/tdm-gcc/
- Download Graphics Library: https://drive.google.com/file/d/1z19xxKm2YseQi7QGxqCCdJ-lLfiEGuCm/view
- Extract Graphics Library
- Copy **graphics.h & winbgim.h** and paste it in **"C:\\TDM-GCC-32\\include"**
- Copy **libbgi.a** and paste it in **"C:\\TDM-GCC-32\\lib"**
- Now go to **CodeBlocks -> Settings -> Compiler** 
- Go to "Toolchain executables" & change Compiler's installation directory to **"C:\\TDM-GCC-32"**
- Go to "Linker Settigns" -> Other linker options & add **"-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32"**

## Index
- Draw the national flag of Bangladesh ✓
- Hidden surface elimination / visual surface ditection
- 2D Translation, Rotation & Scaling
- Create a Sphere, Elipsoid & Torus
- Draw a super Elipsoid
- Create Bejier Curve
- Line Clipping
- Polygon Clipping 
- Bresenham line drawing algorithm
- Bresenham circle drawing algorithm
- Fractal geometry - snowflake pattern