# See the build system documentation in IDF programming guide
# for more information about component CMakeLists.txt files.

idf_component_register(
    SRCS main.c src/rgb_led.c src/wifi_app.c src/http_server.c  src/led.c src/driver.c src/camera.c  # list the source files of this component
    INCLUDE_DIRS  "."  "inc/"    # optional, add here public include directories
    EMBED_FILES webpage/app.css webpage/app.js webpage/favicon.ico webpage/index.html webpage/jquery-3.3.1.min.js
    #PRIV_INCLUDE_DIRS   # optional, add here private include directories
    #REQUIRES            # optional, list the public requirements (component names)
    #PRIV_REQUIRES       # optional, list the private requirements
)
