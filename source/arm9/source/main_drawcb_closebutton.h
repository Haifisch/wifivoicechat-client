
void MWinCallAbout_CloseButton(u32 WinIndex)
{
  Sound_Start("winclose.wav");
  MWin_SetVisible(WinIndex,false);
  MWin_SetActiveTopMost();
  MWin_RefreshScreenMask();
  MWin_AllRefresh();
}

void MWinCallPicture_CloseButton(u32 WinIndex)
{
}

void MWinCallItemPalette_CloseButton(u32 WinIndex)
{
}

void MWinCallColorPicker_CloseButton(u32 WinIndex)
{
  Sound_Start("winclose.wav");
  MWin_SetVisible(WinIndex,false);
  MWin_SetActiveTopMost();
  MWin_RefreshScreenMask();
  MWin_AllRefresh();
}

void MWinCallUserList_CloseButton(u32 WinIndex)
{
  Sound_Start("winclose.wav");
  MWin_SetVisible(WinIndex,false);
  MWin_SetActiveTopMost();
  MWin_RefreshScreenMask();
  MWin_AllRefresh();
}

void MWinCallUserInfo_CloseButton(u32 WinIndex)
{
  Sound_Start("winclose.wav");
  MWin_SetVisible(WinIndex,false);
  MWin_SetActiveTopMost();
  MWin_RefreshScreenMask();
  MWin_AllRefresh();
}

static void MWinCallMicVolume_CloseButton(u32 WinIndex)
{
}

void MWinCallRoomNum_CloseButton(u32 WinIndex)
{
  Sound_Start("winclose.wav");
  MWin_SetVisible(WinIndex,false);
  MWin_SetActiveTopMost();
  MWin_RefreshScreenMask();
  MWin_AllRefresh();
}

void MWinCallPlayEnv_CloseButton(u32 WinIndex)
{
  Sound_Start("winclose.wav");
  MWin_SetVisible(WinIndex,false);
  MWin_SetActiveTopMost();
  MWin_RefreshScreenMask();
  MWin_AllRefresh();
}

