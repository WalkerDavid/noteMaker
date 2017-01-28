# define the source files of the project so we can set special properties
# TODO : damping tool commented out for now - brings in too many dependencies
set ( notemaker_sources
    notemaker.cpp
	GuitarShapeContainer.cpp
	gtarJSONParser.cpp
)
set ( notemaker_headers
    notemaker.h
	GuitarShapeContainer.h
	gtarJSONParser.h
)
set ( notemaker_ui
	notemaker.ui
)
set ( notemaker_qrc
    notemaker.qrc
)

QT5_WRAP_CPP(notemaker_mocs ${notemaker_headers})
source_group("Moc Files" FILES ${notemaker_mocs})
QT5_WRAP_UI(notemaker_ui_headers ${notemaker_ui})
source_group("UI Files" FILES ${notemaker_ui})
QT5_ADD_RESOURCES(notemaker_qrc_src ${notemaker_qrc})
set_source_files_properties(${notemaker_sources} PROPERTIES
                            OBJECT_DEPENDS "${notemaker_ui_headers}")
source_group("Resource Files" FILES ${notemaker_qrc} ${notemaker_qrc_src})

# add the binary tree directory to the search path for include files
include_directories( ${CMAKE_CURRENT_BINARY_DIR}
)

find_package(Qt5PrintSupport)

# add the main library
add_library(notemaker STATIC ${materialtool_sources}  ${materialtool_h} ${materialtool_headers} ${materialtool_mocs} ${materialtool_qrc_src})
target_link_libraries(notemaker)
#add_dependencies(materialtool conversiontool)