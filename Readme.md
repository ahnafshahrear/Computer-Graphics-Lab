# Computer Graphics
3rd Year 2nd Semester - Computer Graphics Lab

# CodeBlocks setup instructions
- Download TDM GCC 32 Bit Compiler from this link: https://jmeubank.github.io/tdm-gcc/
- Download Graphics Library: https://drive.google.com/file/d/1z19xxKm2YseQi7QGxqCCdJ-lLfiEGuCm/view
- Extract Graphics Library
- Copy (graphics.h & winbgim.h) and paste it in "C:\\TDM-GCC-32\\include"
- Copy (libbgi.a) and paste it in "C:\\TDM-GCC-32\\lib"
- Now go to CodeBlocks -> Settings -> Compiler 
- Go to Toolchain executables & change Compiler's installation directory to "C:\\TDM-GCC-32"
- Go to Linker Settigns -> Other linker options & add "-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32"

# Problems
- Draw the national flag of Bangladesh
- Hidden surface elimination / visual surface ditection
- 3D Translation, Rotation & Scaling