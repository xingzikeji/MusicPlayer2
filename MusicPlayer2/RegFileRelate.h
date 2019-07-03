#pragma once
class CRegFileRelate
{
public:
    CRegFileRelate();
    ~CRegFileRelate();

    void SetModelPath(LPCTSTR model_path);
    void SetAppName(LPCTSTR app_name);

    //����һ���ļ����͵Ĺ���
    //file_ext: Ҫ�������ļ���չ��
    bool AddFileTypeRelate(LPCTSTR file_ext, LPCTSTR ico_path = nullptr, bool default_icon = true);
    bool AddFileTypeRelate(LPCTSTR file_ext, int ico_index, bool default_icon = true);
    //�ж�һ���ļ������Ƿ��ѹ���
    bool IsFileTypeRelated(LPCTSTR file_ext);
    //ɾ��һ���ļ����͵Ĺ���
    bool DeleteFileTypeRelate(LPCTSTR file_ext);

private:
    bool OpenItem(CRegKey& key, LPCTSTR item_str);

private:
    CString m_model_path;
    CString m_app_name = APP_NAME;
};
