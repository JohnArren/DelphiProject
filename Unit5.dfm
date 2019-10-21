object Form5: TForm5
  Left = 63
  Top = 147
  Width = 676
  Height = 475
  Caption = 'Form5'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 200
    Top = 184
    Width = 148
    Height = 13
    Caption = #1053#1072#1087#1080#1096#1080#1090#1077' '#1079#1072#1076#1072#1095#1091' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1091
  end
  object Label2: TLabel
    Left = 360
    Top = 184
    Width = 178
    Height = 13
    Caption = #1042#1099#1073#1077#1088#1077#1090#1080' '#1076#1072#1090#1091' '#1074#1099#1087#1086#1083#1085#1077#1085#1080#1103' '#1079#1072#1076#1072#1095#1080
  end
  object DBGrid1: TDBGrid
    Left = 200
    Top = 48
    Width = 320
    Height = 120
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBLookupComboBox1: TDBLookupComboBox
    Left = 24
    Top = 56
    Width = 145
    Height = 21
    KeyField = #1050#1086#1076'_'#1057#1086#1090#1088#1091#1076#1085#1080#1082#1072
    ListField = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080']!['#1060#1072#1084#1080#1083#1080#1103
    ListSource = DataSource1
    TabOrder = 1
  end
  object DBEdit1: TDBEdit
    Left = 24
    Top = 88
    Width = 121
    Height = 21
    DataField = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080']!['#1048#1084#1103
    DataSource = DataSource1
    TabOrder = 2
  end
  object DBEdit2: TDBEdit
    Left = 24
    Top = 120
    Width = 121
    Height = 21
    DataField = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080']!['#1054#1090#1095#1077#1089#1090#1074#1086
    DataSource = DataSource1
    TabOrder = 3
  end
  object Button1: TButton
    Left = 40
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 200
    Top = 208
    Width = 121
    Height = 21
    TabOrder = 5
  end
  object DateTimePicker1: TDateTimePicker
    Left = 336
    Top = 208
    Width = 186
    Height = 21
    CalAlignment = dtaLeft
    Date = 43543.564184294
    Time = 43543.564184294
    DateFormat = dfShort
    DateMode = dmComboBox
    Kind = dtkDate
    ParseInput = False
    TabOrder = 6
  end
  object DBGrid2: TDBGrid
    Left = 200
    Top = 248
    Width = 320
    Height = 120
    TabOrder = 7
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object Button2: TButton
    Left = 448
    Top = 384
    Width = 75
    Height = 25
    Caption = 'Button2'
    TabOrder = 8
  end
  object DataSource1: TDataSource
    Left = 600
    Top = 120
  end
  object ADOTable1: TADOTable
    CursorType = ctStatic
    TableName = #1045#1078#1077#1076#1085#1077#1074#1085#1080#1082
    Left = 568
    Top = 88
  end
  object DataSource2: TDataSource
    Left = 568
    Top = 120
  end
  object ADOQuery2: TADOQuery
    Parameters = <>
    Left = 536
    Top = 88
  end
  object DataSource3: TDataSource
    Left = 536
    Top = 120
  end
end
