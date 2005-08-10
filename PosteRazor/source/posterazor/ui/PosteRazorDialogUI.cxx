// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include "PosteRazorDialogUI.h"

void PosteRazorDialogUI::cb_m_nextButton_i(Fl_Button*, void*) {
  next();
}
void PosteRazorDialogUI::cb_m_nextButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_nextButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_prevButton_i(Fl_Button*, void*) {
  prev();
}
void PosteRazorDialogUI::cb_m_prevButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_prevButton_i(o,v);
}

void PosteRazorDialogUI::cb__i(Fl_Button*, void*) {
  LoadInputImage();
}
void PosteRazorDialogUI::cb_(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb__i(o,v);
}

void PosteRazorDialogUI::cb_m_standardPageSizeRadioButton_i(Fl_Round_Button*, void*) {
  SelectPageSizeGroup(false);
}
void PosteRazorDialogUI::cb_m_standardPageSizeRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_standardPageSizeRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_pageOrientationPortraitRadioButton_i(Fl_Round_Button*, void*) {
  HandlePaperOrientationChangement();
}
void PosteRazorDialogUI::cb_m_pageOrientationPortraitRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_pageOrientationPortraitRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_pageOrientationLandscapeRadioButton_i(Fl_Round_Button*, void*) {
  HandlePaperOrientationChangement();
}
void PosteRazorDialogUI::cb_m_pageOrientationLandscapeRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->parent()->user_data()))->cb_m_pageOrientationLandscapeRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_customPageSizeRadioButton_i(Fl_Round_Button*, void*) {
  SelectPageSizeGroup(true);
}
void PosteRazorDialogUI::cb_m_customPageSizeRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_customPageSizeRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_pageCustomWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteWidthInput);
}
void PosteRazorDialogUI::cb_m_pageCustomWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_pageCustomWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_pageCustomHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteHeightInput);
}
void PosteRazorDialogUI::cb_m_pageCustomHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_pageCustomHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizeAbsoluteRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizeAbsoluteRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizeAbsoluteRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteWidthInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteHeightInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizeInPagesRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizeInPagesRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizeInPagesRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesWidthInput);
}
void PosteRazorDialogUI::cb_m_posterPagesWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesHeightInput);
}
void PosteRazorDialogUI::cb_m_posterPagesHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterSizePercentualRadioButton_i(Fl_Round_Button*, void*) {
  UpdatePosterSizeGroupsState();
}
void PosteRazorDialogUI::cb_m_posterSizePercentualRadioButton(Fl_Round_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->user_data()))->cb_m_posterSizePercentualRadioButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPercentualSizeInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPercentualSizeInput);
}
void PosteRazorDialogUI::cb_m_posterPercentualSizeInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPercentualSizeInput_i(o,v);
}
PosteRazorDialogUI::PosteRazorDialogUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _PosteRazorDialogUI();
}

PosteRazorDialogUI::PosteRazorDialogUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _PosteRazorDialogUI();
}

void PosteRazorDialogUI::_PosteRazorDialogUI() {
  PosteRazorDialogUI *w = this;
  PosteRazorDialogUI *o = this;
o->box(FL_FLAT_BOX);
o->color(FL_BACKGROUND_COLOR);
o->selection_color(FL_BACKGROUND_COLOR);
o->labeltype(FL_NORMAL_LABEL);
o->labelfont(0);
o->labelsize(14);
o->labelcolor(FL_BLACK);
o->user_data((void*)(this));
o->align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE);
o->when(FL_WHEN_RELEASE);
{ Fl_Group* o = new Fl_Group(10, 420, 600, 25);
  { Fl_Button* o = m_nextButton = new Fl_Button(525, 420, 85, 25, "Next @-2->");
    o->callback((Fl_Callback*)cb_m_nextButton);
  }
  { Fl_Button* o = m_prevButton = new Fl_Button(430, 420, 85, 25, "@-2<- Back");
    o->callback((Fl_Callback*)cb_m_prevButton);
  }
  { Fl_Box* o = new Fl_Box(225, 420, 15, 25);
    Fl_Group::current()->resizable(o);
  }
  o->end();
}
{ Fl_Wizard* o = m_wizard = new Fl_Wizard(360, 45, 250, 365);
  o->box(FL_THIN_DOWN_BOX);
  o->user_data((void*)(this));
  { Fl_Group* o = m_loadInputImageStep = new Fl_Group(360, 45, 250, 365);
    o->color(FL_LIGHT1);
    { Fl_Group* o = new Fl_Group(370, 70, 230, 25, "Input Image");
      { Fl_Button* o = new Fl_Button(575, 70, 25, 25, "...");
        o->callback((Fl_Callback*)cb_);
      }
      { Fl_Box* o = m_inputFileNameLabel = new Fl_Box(370, 70, 205, 25);
        o->box(FL_THIN_DOWN_BOX);
        o->color((Fl_Color)55);
        o->align(68|FL_ALIGN_INSIDE);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Group* o = m_imageInfoGroup = new Fl_Group(370, 120, 230, 85, "Image information");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      { Fl_Box* o = m_imageInfoValuesLabel = new Fl_Box(480, 130, 115, 65);
        o->align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_imageInfoKeysLabel = new Fl_Box(375, 130, 105, 65);
        o->align(FL_ALIGN_TOP_RIGHT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 410, 250, 0);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_pageSizeStep = new Fl_Group(360, 45, 250, 365);
    o->hide();
    { Fl_Round_Button* o = m_standardPageSizeRadioButton = new Fl_Round_Button(370, 52, 230, 20, "Standard paper format");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_standardPageSizeRadioButton);
    }
    { Fl_Group* o = m_standardPageSizeGroup = new Fl_Group(370, 70, 230, 230);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color((Fl_Color)48);
      o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
      { Fl_Choice* o = m_paperFormatChoice = new Fl_Choice(450, 80, 140, 25, "Format:");
        o->down_box(FL_BORDER_BOX);
      }
      { Fl_Group* o = new Fl_Group(450, 115, 140, 60, "Orientation:");
        o->box(FL_THIN_DOWN_BOX);
        o->color((Fl_Color)43);
        o->align(FL_ALIGN_LEFT);
        { Fl_Round_Button* o = m_pageOrientationPortraitRadioButton = new Fl_Round_Button(455, 120, 130, 25, "Portrait");
          o->type(102);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->callback((Fl_Callback*)cb_m_pageOrientationPortraitRadioButton);
        }
        { Fl_Round_Button* o = m_pageOrientationLandscapeRadioButton = new Fl_Round_Button(455, 145, 130, 25, "Landscape");
          o->type(102);
          o->down_box(FL_ROUND_DOWN_BOX);
          o->callback((Fl_Callback*)cb_m_pageOrientationLandscapeRadioButton);
        }
        o->end();
      }
      { Fl_Group* o = new Fl_Group(450, 185, 140, 105, "Borders:");
        o->box(FL_THIN_DOWN_BOX);
        o->color((Fl_Color)43);
        o->align(FL_ALIGN_LEFT);
        { Fl_Value_Input* o = m_pageBorderTopInput = new Fl_Value_Input(500, 195, 40, 25);
          o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Value_Input* o = m_pageBorderRightInput = new Fl_Value_Input(540, 225, 40, 25);
          o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Value_Input* o = m_pageBorderBottomInput = new Fl_Value_Input(500, 255, 40, 25);
          o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        { Fl_Value_Input* o = m_pageBorderLeftInput = new Fl_Value_Input(460, 225, 40, 25);
          o->align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE);
          o->step(0.1);
          o->range(0, 999);
          o->precision(2);
        }
        o->end();
      }
      o->end();
    }
    { Fl_Round_Button* o = m_customPageSizeRadioButton = new Fl_Round_Button(370, 307, 230, 20, "Custom paper format");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_customPageSizeRadioButton);
    }
    { Fl_Group* o = m_customPageSizeGroup = new Fl_Group(370, 325, 230, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      o->align(FL_ALIGN_TOP|FL_ALIGN_INSIDE);
      { Fl_Value_Input* o = m_pageCustomWidthInput = new Fl_Value_Input(450, 335, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_pageCustomWidthInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(2);
      }
      { Fl_Value_Input* o = m_pageCustomHeightInput = new Fl_Value_Input(450, 365, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_pageCustomHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(0.1);
        o->range(0, 999);
        o->precision(2);
      }
      { Fl_Box* o = m_pageCustomWidthLabel = new Fl_Box(540, 335, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_pageCustomHeightLabel = new Fl_Box(540, 365, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 400, 250, 10);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_posterSizeStep = new Fl_Group(360, 45, 250, 365);
    o->hide();
    { Fl_Round_Button* o = m_posterSizeAbsoluteRadioButton = new Fl_Round_Button(370, 52, 230, 20, "Absolute image size");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizeAbsoluteRadioButton);
    }
    { Fl_Group* o = m_posterSizeAbsoluteGroup = new Fl_Group(370, 70, 230, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      o->align(FL_ALIGN_CENTER);
      { Fl_Value_Input* o = m_posterAbsoluteWidthInput = new Fl_Value_Input(450, 80, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteWidthInput);
        o->step(1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterAbsoluteHeightInput = new Fl_Value_Input(450, 110, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterAbsoluteWidthLabel = new Fl_Box(540, 80, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterAbsoluteHeightLabel = new Fl_Box(540, 110, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Round_Button* o = m_posterSizeInPagesRadioButton = new Fl_Round_Button(370, 152, 230, 20, "Size in pages");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizeInPagesRadioButton);
    }
    { Fl_Group* o = m_posterSizeInPagesGroup = new Fl_Group(370, 170, 230, 75);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPagesWidthInput = new Fl_Value_Input(450, 180, 90, 25, "Width:");
        o->callback((Fl_Callback*)cb_m_posterPagesWidthInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterPagesHeightInput = new Fl_Value_Input(450, 210, 90, 25, "Height:");
        o->callback((Fl_Callback*)cb_m_posterPagesHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPagesWidthLabel = new Fl_Box(540, 180, 50, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterPagesHeightLabel = new Fl_Box(540, 210, 50, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Round_Button* o = m_posterSizePercentualRadioButton = new Fl_Round_Button(370, 252, 230, 20, "Image size in percent");
      o->type(102);
      o->down_box(FL_ROUND_DOWN_BOX);
      o->callback((Fl_Callback*)cb_m_posterSizePercentualRadioButton);
    }
    { Fl_Group* o = m_posterSizePercentualGroup = new Fl_Group(370, 270, 230, 45);
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPercentualSizeInput = new Fl_Value_Input(450, 280, 90, 25, "Size:");
        o->callback((Fl_Callback*)cb_m_posterPercentualSizeInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPercentualWidthLabel = new Fl_Box(540, 281, 50, 25, "%");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 410, 250, 0);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = new Fl_Group(360, 45, 250, 365);
    o->hide();
    o->end();
  }
  { Fl_Group* o = m_savePosterStep = new Fl_Group(360, 45, 250, 365);
    o->hide();
    o->end();
  }
  o->end();
}
{ Fl_Group* o = m_previewImageGroup = new Fl_Group(10, 45, 345, 365);
  o->box(FL_THIN_DOWN_BOX);
  o->color((Fl_Color)34);
  o->selection_color(FL_LIGHT2);
  o->labelfont(1);
  o->labelsize(26);
  o->labelcolor((Fl_Color)61);
  o->align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE);
  o->end();
  Fl_Group::current()->resizable(o);
}
{ Fl_Box* o = new Fl_Box(10, 10, 600, 25, "Step 1 of 8: Load an image");
  o->box(FL_THIN_UP_BOX);
  o->color((Fl_Color)10);
  o->labelfont(1);
  o->labelsize(15);
  o->labelcolor(FL_GRAY0);
}
size_range(this->w(), this->h());
end();
}
