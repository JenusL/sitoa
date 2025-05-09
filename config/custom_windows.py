# Sample configuration file for Windows
#
# Copy this file as 'custom.py' at the root of the repo if you need to customize
# the build variables

TARGET_ARCH         = 'x86_64'
MSVC_VERSION        = '14.0'
VS_HOME             = r'C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC'
WINDOWS_KIT         = r'C:/Program Files (x86)/Windows Kits/10'

XSISDK_ROOT         = r'C:/Program Files/Autodesk/Softimage 2015 SP2/XSISDK'
ARNOLD_HOME         = r'C:/SolidAngle/Arnold-7.3.7.1-windows'

TARGET_WORKGROUP_PATH  = r'./dist/Softimage_2015/Addons/SItoA'

WARN_LEVEL = 'strict'
MODE       = 'opt'  # or 'debug'
SHOW_CMDS  = True

PATCH_ADLM = True
