set(FRONTEND_SRCS
   "${CMAKE_CURRENT_SOURCE_DIR}/FrontendManager.h"
   "${CMAKE_CURRENT_SOURCE_DIR}/FrontendManager.cpp"
   "${CMAKE_CURRENT_SOURCE_DIR}/FrontendPage.h"
   "${CMAKE_CURRENT_SOURCE_DIR}/FrontendPage.cpp"
   "${CMAKE_CURRENT_SOURCE_DIR}/FrontendScreens.h"
   PARENT_SCOPE)

file(GLOB FRONTEND_PAGES Pages/*.h  Pages/*.cpp)
set(FRONTEND_PAGES ${FRONTEND_PAGES} PARENT_SCOPE)

source_group("frontend" FILES ${FRONTEND_SRCS})
source_group("frontend\\Pages" FILES ${FRONTEND_PAGES})
