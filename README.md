# CerebNEST

Tested with:

*branch master*: Ubuntu 18.04 and Red Hat Enterprise Linux Server 7.7 (Maipo), Python 3.7.3 and NEST Release 2.18.0


### Installation instructions

0. Install NEST following the instructions provided here (http://www.nest-simulator.org/)

1. Export an Environment Variable containing the installation directory of NEST. E.g.:
```
export NEST_INSTALL_DIR=$HOME/nest-simulator-install/
```
2. Clone this GitHub Repository in a directory outside NEST source and build directories. E.g.:
```
cd $HOME
git clone https://github.com/alberto-antonietti/CerebNEST/
```
3. Move to CerebNEST directory and create a new folder where you will build the extension module
```
mkdir $HOME/cereb-nest-build
mkdir b	cd $HOME/cereb-nest-build

```
4. Run the following CMake command (Tested with CMake 3.2.2)
```
cmake -Dwith-nest=${NEST_INSTALL_DIR}/bin/nest-config ..
```

The resulting output should be something similar to:
> [...]
>-------------------------------------------------------
>
>You can now build and install 'cerebmodule' using
>  make
>  make install
>
>The library file libcerebmodule.so will be installed to
>  /home/alberto/nest-simulator-install/lib/nest
>Help files will be installed to
>  /home/alberto/nest-simulator-install/share/doc/nest
>
>The module can be loaded into NEST using
>  (cerebmodule) Install        (in SLI)
>  nest.Install('cerebmodule')  (in PyNEST)
>
>The module will be installed into a non-default location!
>Make sure to set the environment variables:
>  export NEST_MODULE_PATH=/home/alberto/nest-simulator-install/lib/nest:$NEST_MODULE_PATH
>  export SLI_PATH=/home/alberto/nest-simulator-install/share/nest/sli:$SLI_PATH
> [...]

5. Execute the last two lines, generated by the CMake command. 
```
export NEST_MODULE_PATH=/home/alberto/nest-simulator-install/lib/nest:$NEST_MODULE_PATH
export SLI_PATH=/home/alberto/nest-simulator-install/share/nest/sli:$SLI_PATH
```
This passage should be repeated every time the Terminal is closed. It is possible to add the two lines in your \.bashrc to avoid doing this every time.

6. Make and install the module
```
make
make install
```

7. Every time you need the module, you can install it in this way:
```
python

```

```
import nest
nest.Install("cerebmodule")

```

8. You can now use all the nodes and synapses contained in this NEST Module.
