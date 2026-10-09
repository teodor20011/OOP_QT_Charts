cmake_minimum_required(VERSION 3.20)
project(Applicazione_diagrammi)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#[[ Linux 
set(CMAKE_PREFIX_PATH "/home/student/Qt/5.9.5/gcc_64/lib/cmake")]]
#[[ Windows ]]
set(CMAKE_PREFIX_PATH "C:/Qt/5.9.5/mingw53_32/lib/cmake") 

set(RESOURCE_FILE
        resources.qrc)

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Charts
        Xml
        Network
        REQUIRED)

add_executable(Applicazione_diagrammi "main.cpp" "CurrentFilesView.cpp" "CurrentFilesView.h" "MainWindow.cpp" "MainWindow.h" "MainMenuBar.cpp" "MainMenuBar.h"
        	#[[ Windows only:]]  "Resources.qrc" "appicon.rc" "ChartView.cpp" "ChartView.h" "DataRow.h" "RowContainer.cpp" "RowContainer.h" "BarDataView.cpp" "BarDataView.h" "DataRow.cpp" "AbstractRow.cpp" "AbstractRow.h" "SeriesRow.cpp" "SeriesRow.h" "AbstractRowContainer.cpp" "AbstractRowContainer.h" "SeriesContainer.cpp" "SeriesContainer.h" "SeriesView.cpp" "SeriesView.h" "SingleFileView.cpp" "SingleFileView.h" "BarChartModel.cpp" "BarChartModel.h" "SelectColorButton.cpp" "SelectColorButton.h" "PieChart.cpp" "PieChart.h" "AbstractChart.cpp" "AbstractChart.h" "BarChart.cpp" "BarChart.h" "AbstractModel.cpp" "AbstractModel.h" "PieChartModel.cpp" "PieChartModel.h" "PieDataView.cpp" "PieDataView.h" "AbstractDataView.cpp" "AbstractDataView.h" "SplineDataRow.cpp" "SplineDataRow.h" "SplineRowContainer.cpp" "SplineRowContainer.h" "SplineDataView.cpp" "SplineDataView.h" "SplineChart.cpp" "SplineChart.h" "SplineChartModel.cpp" "SplineChartModel.h" "resources.qrc")

target_link_libraries(Applicazione_diagrammi
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Charts
        Qt5::Xml
        Qt5::Network
        )

if (WIN32)
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets Charts Xml Network)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()