object Form4: TForm4
  Left = 276
  Top = 281
  Width = 751
  Height = 505
  Caption = #1060#1086#1088#1084#1072' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  Color = clMoneyGreen
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label300: TLabel
    Left = 496
    Top = 24
    Width = 20
    Height = 24
    Caption = '##'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label301: TLabel
    Left = 248
    Top = 8
    Width = 35
    Height = 13
    Caption = '#####'
  end
  object Label302: TLabel
    Left = 248
    Top = 24
    Width = 35
    Height = 13
    Caption = '#####'
  end
  object Label303: TLabel
    Left = 248
    Top = 40
    Width = 35
    Height = 13
    Caption = '#####'
  end
  object Label304: TLabel
    Left = 359
    Top = 24
    Width = 126
    Height = 20
    Caption = #1050#1086#1076' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 8
    Top = 56
    Width = 521
    Height = 385
    Color = clSilver
    TabOrder = 0
    object Label2: TLabel
      Left = 16
      Top = 32
      Width = 32
      Height = 13
      Caption = 'Label2'
    end
    object Label1: TLabel
      Left = 16
      Top = 8
      Width = 32
      Height = 13
      Caption = 'Label1'
    end
    object DBNavigator1: TDBNavigator
      Left = 9
      Top = 320
      Width = 496
      Height = 25
      DataSource = DataModule3.DataSource5
      VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast]
      TabOrder = 0
    end
    object Button1: TButton
      Left = 8
      Top = 352
      Width = 75
      Height = 25
      Caption = #1057#1077#1075#1086#1076#1085#1103
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 88
      Top = 352
      Width = 75
      Height = 25
      Caption = #1047#1072#1074#1090#1088#1072
      TabOrder = 2
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 168
      Top = 352
      Width = 75
      Height = 25
      Caption = #1069#1090#1072' '#1085#1077#1076#1077#1083#1103
      TabOrder = 3
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 248
      Top = 352
      Width = 75
      Height = 25
      Caption = #1042#1089#1077
      TabOrder = 4
      OnClick = Button4Click
    end
    object CheckBox1: TCheckBox
      Left = 448
      Top = 352
      Width = 49
      Height = 17
      Caption = 'SQL'
      TabOrder = 5
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 65
      Width = 497
      Height = 256
      DataSource = DataModule3.DataSource5
      TabOrder = 6
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnDrawColumnCell = DBGrid1DrawColumnCell
    end
  end
  object Panel2: TPanel
    Left = 536
    Top = 56
    Width = 185
    Height = 273
    Color = clTeal
    TabOrder = 1
    object Label3: TLabel
      Left = 32
      Top = 8
      Width = 116
      Height = 54
      Caption = #1044#1077#1081#1089#1090#1074#1080#1103' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clScrollBar
      Font.Height = -24
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
      WordWrap = True
    end
    object Label4: TLabel
      Left = 8
      Top = 72
      Width = 141
      Height = 22
      Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1079#1072#1076#1072#1095#1080
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clScrollBar
      Font.Height = -20
      Font.Name = 'Times New Roman'
      Font.Style = []
      ParentFont = False
    end
    object Button54: TButton
      Left = 40
      Top = 232
      Width = 113
      Height = 25
      Caption = #1047#1072#1074#1077#1088#1096#1080#1090#1100' '#1079#1072#1076#1072#1095#1091
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnClick = Button54Click
    end
    object DBMemo1: TDBMemo
      Left = 8
      Top = 96
      Width = 169
      Height = 89
      DataField = #1063#1090#1086
      DataSource = DataModule3.DataSource5
      TabOrder = 1
    end
    object Edit1: TEdit
      Left = 8
      Top = 192
      Width = 169
      Height = 21
      TabOrder = 2
      Visible = False
    end
  end
  object ButtonExit: TButton
    Left = 648
    Top = 16
    Width = 75
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = ButtonExitClick
  end
  object ButtonLogOut: TButton
    Left = 8
    Top = 16
    Width = 153
    Height = 25
    Caption = #1057#1084#1077#1085#1080#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = ButtonLogOutClick
  end
  object Button534634: TButton
    Left = 560
    Top = 16
    Width = 75
    Height = 25
    Caption = #1057#1087#1088#1072#1074#1082#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button534634Click
  end
end
