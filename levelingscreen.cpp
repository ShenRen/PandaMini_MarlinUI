#include "levelingscreen.h"
#include "marlinui.h"
#include "resources.h"
#include "multilang.h"
#include "theme.h"
#include "screentask.h"
#include <lvgl>
#include <ui_api.h>
#include "lvslot.hpp"

using std::placeholders::_1;

LevelingScreen::LevelingScreen()
{
}

//bool LevelingScreen::beforeShow()
//{
//}

//void LevelingScreen::afterHide()
//{
//}

void LevelingScreen::onLangChanged()
{
}

void LevelingScreen::onThemeChanged()
{
}

bool LevelingScreen::initScreen()
{
    //初始化挤出界面

    const int16_t screenWidth = width();
    const int16_t screenHeight = height();
    const int16_t screendpi = dpi();

    const int16_t safeMargin = 6;
    const int16_t spacing = 6;
    const int16_t titleBarHeight = 32;
    const int16_t stateBarHeight = 26;

    const int16_t fontSize = 16;
    const int16_t iconSize = 24;

    LVObject * reference = nullptr; //布局参考对象

    {
        //标题栏
        LVObject * titleBar = new LVObject(this,nullptr);
        titleBar->setStyle(THEME_STYLE_GET(Theme_Screen_TitleBar));
        titleBar->setSize(screenWidth,titleBarHeight);
        titleBar->align(LV_ALIGN_IN_TOP_LEFT);
        reference = titleBar;

        //标题返回按钮
        LVButton * butBack = new LVButton(titleBar,nullptr);
        butBack->setSize(titleBarHeight,titleBarHeight);
        butBack->setStyle(LV_BTN_STYLE_REL,THEME_STYLE_GET(Theme_Screen_ButtonBack));
        butBack->setStyle(LV_BTN_STYLE_PR,THEME_STYLE_GET(Theme_Screen_ButtonBack));
        butBack->align(LV_ALIGN_IN_LEFT_MID,safeMargin,0);
        butBack->setAction(LV_BTN_ACTION_CLICK,onButBackHomeClicked);
        LVImage * imgBack = new LVImage(butBack,nullptr);
        imgBack->setSrc(&back_24);

        //标题
        LVLabel* labTitle = new LVLabel(titleBar,nullptr);
        labTitle->setText("开关检测");
        labTitle->align(butBack,LV_ALIGN_OUT_RIGHT_MID);
    }

    {
        //功能区域

        LVObject * butArea = new LVObject(this,nullptr);
        butArea->align(LV_ALIGN_IN_TOP_LEFT,0,titleBarHeight);
        butArea->setSize(screenWidth,screenHeight - titleBarHeight - stateBarHeight);
        butArea->setStyle(THEME_STYLE_GET(Theme_screen_ButtonArea));

    }

    {
        //状态栏
        LVObject * stateBar = new LVObject(this,nullptr);
        stateBar->setSize(screenWidth,stateBarHeight);
        stateBar->align(LV_ALIGN_IN_BOTTOM_LEFT,0,0);
        //状态栏样式
        stateBar->setStyle(THEME_STYLE_GET(Theme_Screen_StateBar));

        //状态栏信息
        LVLabel * stateMesg = new LVLabel(stateBar,nullptr);
        stateMesg->align(LV_ALIGN_IN_LEFT_MID,safeMargin,0);
        stateMesg->setText("状态每秒刷新"); //"Connected!"
        stateMesg->align(LV_ALIGN_IN_LEFT_MID,safeMargin,0);
    }

    return true;
}
